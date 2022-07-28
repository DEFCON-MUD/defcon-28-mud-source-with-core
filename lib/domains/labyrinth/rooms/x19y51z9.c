inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 51, 9 }));
  set_short( "Hallway - x19y51z9" );
set_objects( DIR+"/npc/buddypetersen.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y52z9.c",
  "south" : DIR+"/rooms/x19y50z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the crud in this joint. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
