inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 48, 3 }));
  set_short( "Hallway - x33y48z3" );
set_objects( DIR+"/npc/loser.c");
 set_exits( ([
  "east" : DIR+"/rooms/x34y48z3.c",
  "north" : DIR+"/rooms/x33y49z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the gunk in this hellhole. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
