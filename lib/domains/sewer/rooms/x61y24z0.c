inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 24, 0 }));
  set_short( "Corridor - x61y24z0" );
set_objects( DIR+"/monsters/vern.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y24z0.c",
  "south" : DIR+"/rooms/x61y23z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the gunk in this stink-pit. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
