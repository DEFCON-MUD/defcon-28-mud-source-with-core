inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 19, 0 }));
  set_short( "Hallway - x17y19z0" );
set_objects( DIR+"/npc/cyclophant.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y20z0.c",
  "south" : DIR+"/rooms/x17y18z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the sludge in this joint. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
