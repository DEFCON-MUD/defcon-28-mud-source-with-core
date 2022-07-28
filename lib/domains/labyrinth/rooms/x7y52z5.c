inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 52, 5 }));
  set_short( "Hallway - x7y52z5" );
set_objects( DIR+"/npc/doe.c");
 set_exits( ([
  "east" : DIR+"/rooms/x8y52z5.c",
  "north" : DIR+"/rooms/x7y53z5.c",
  "south" : DIR+"/rooms/x7y51z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the crud in this stink-pit. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the east, north, and west.%^RESET%^");
}
