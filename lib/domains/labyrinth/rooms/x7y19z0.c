inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 19, 0 }));
  set_short( "Hallway - x7y19z0" );
set_objects( DIR+"/npc/enforcer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y20z0.c",
  "south" : DIR+"/rooms/x7y18z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the crud in this sty. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
