inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 14, 5 }));
  set_short( "Corridor - x53y14z5" );
set_objects( DIR+"/npc/auditor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y14z5.c",
  "east" : DIR+"/rooms/x54y14z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the crappy sales material in this area. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
