inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 4, 9 }));
  set_short( "Corridor - x8y4z9" );
set_objects( DIR+"/npc/warrior.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y4z9.c",
  "east" : DIR+"/rooms/x9y4z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the gunk in this dump. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
