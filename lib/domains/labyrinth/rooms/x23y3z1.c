inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 3, 1 }));
  set_short( "Corridor - x23y3z1" );
set_objects( DIR+"/npc/goon.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y4z1.c",
  "south" : DIR+"/rooms/x23y2z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the crud in this joint. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
