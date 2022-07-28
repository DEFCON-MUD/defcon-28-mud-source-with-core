inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 56, 5 }));
  set_short( "Corridor - x44y56z5" );
set_objects( DIR+"/npc/roger.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y56z5.c",
  "east" : DIR+"/rooms/x45y56z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the crud in this area. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
