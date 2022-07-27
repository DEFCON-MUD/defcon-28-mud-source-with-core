inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 34, 2 }));
  set_short( "Corridor - x33y34z2" );
set_objects( DIR+"/monsters/johnson.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y34z2.c",
  "north" : DIR+"/rooms/x33y35z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the sludge in this stink-pit. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
