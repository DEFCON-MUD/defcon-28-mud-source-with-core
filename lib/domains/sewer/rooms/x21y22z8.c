inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 22, 8 }));
  set_short( "Corridor - x21y22z8" );
set_objects( DIR+"/monsters/autobot.c");
 set_exits( ([
  "east" : DIR+"/rooms/x22y22z8.c",
  "north" : DIR+"/rooms/x21y23z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the sludge in this dump. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
