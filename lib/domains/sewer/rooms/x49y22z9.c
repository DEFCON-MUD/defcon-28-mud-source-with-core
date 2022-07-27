inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 22, 9 }));
  set_short( "Passage - x49y22z9" );
set_objects( DIR+"/monsters/raddgoo.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y22z9.c",
  "north" : DIR+"/rooms/x49y23z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the sludge in this dump. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
