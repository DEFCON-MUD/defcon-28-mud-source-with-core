inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 24, 3 }));
  set_short( "Hallway - x17y24z3" );
set_objects( DIR+"/npc/clubdancer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x18y24z3.c",
  "north" : DIR+"/rooms/x17y25z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the crud in this dump. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
