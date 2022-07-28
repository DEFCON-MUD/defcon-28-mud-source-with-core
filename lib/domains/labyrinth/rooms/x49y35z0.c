inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 35, 0 }));
  set_short( "Corridor - x49y35z0" );
set_objects( DIR+"/npc/r1mandrone.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y36z0.c",
  "south" : DIR+"/rooms/x49y34z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the crap in this area. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
