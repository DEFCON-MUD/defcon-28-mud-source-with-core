inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 12, 9 }));
  set_short( "Corridor - x25y12z9" );
set_objects( DIR+"/npc/jackback.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y13z9.c",
  "south" : DIR+"/rooms/x25y11z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the muck in this joint. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
