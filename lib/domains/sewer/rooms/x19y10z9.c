inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 10, 9 }));
  set_short( "Passage - x19y10z9" );
set_objects( DIR+"/monsters/biddleman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y10z9.c",
  "south" : DIR+"/rooms/x19y9z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the crud in this dump. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
