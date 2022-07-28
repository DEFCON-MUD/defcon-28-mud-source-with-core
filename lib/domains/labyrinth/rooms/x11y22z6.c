inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 22, 6 }));
  set_short( "Corridor - x11y22z6" );
set_objects( DIR+"/npc/norman.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y22z6.c",
  "north" : DIR+"/rooms/x11y23z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the pile of put kevin back stickers in this area. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
