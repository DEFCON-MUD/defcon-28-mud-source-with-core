inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 16, 8 }));
  set_short( "Hallway - x31y16z8" );
set_objects( DIR+"/npc/monkey.c");
 set_exits( ([
  "east" : DIR+"/rooms/x32y16z8.c",
  "north" : DIR+"/rooms/x31y17z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the crud in this dump. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
