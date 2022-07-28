inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 44, 7 }));
  set_short( "Corridor - x53y44z7" );
set_objects( DIR+"/npc/r1carmella.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y44z7.c",
  "east" : DIR+"/rooms/x54y44z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the crap in this dump. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
