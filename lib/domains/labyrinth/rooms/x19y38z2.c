inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 38, 2 }));
  set_short( "Corridor - x19y38z2" );
set_objects( DIR+"/npc/mosquito.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y38z2.c",
  "south" : DIR+"/rooms/x19y37z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the muck in this joint. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
