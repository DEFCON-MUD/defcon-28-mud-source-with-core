inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 10, 4 }));
  set_short( "Passage - x5y10z4" );
set_objects( DIR+"/npc/Gl0Rz0.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y10z4.c",
  "east" : DIR+"/rooms/x6y10z4.c",
  "south" : DIR+"/rooms/x5y9z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the crud in this dump. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, east, and west.%^RESET%^");
}
