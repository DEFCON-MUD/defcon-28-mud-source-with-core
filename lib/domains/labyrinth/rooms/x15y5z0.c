inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 5, 0 }));
  set_short( "Hallway - x15y5z0" );
set_objects( DIR+"/npc/leader.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y6z0.c",
  "south" : DIR+"/rooms/x15y4z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the crud in this stink-pit. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
