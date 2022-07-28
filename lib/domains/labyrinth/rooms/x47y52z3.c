inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 52, 3 }));
  set_short( "Hallway - x47y52z3" );
set_objects( DIR+"/npc/rick.c");
 set_exits( ([
  "east" : DIR+"/rooms/x48y52z3.c",
  "south" : DIR+"/rooms/x47y51z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the crap in this hellhole. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
