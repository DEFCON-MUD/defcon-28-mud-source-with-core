inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 5, 1 }));
  set_short( "Corridor - x15y5z1" );
set_objects( DIR+"/monsters/norman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y6z1.c",
  "south" : DIR+"/rooms/x15y4z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the crud in this area. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
