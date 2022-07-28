inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 36, 6 }));
  set_short( "Passage - x53y36z6" );
set_objects( DIR+"/npc/johnson.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y36z6.c",
  "east" : DIR+"/rooms/x54y36z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the muck in this joint. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
