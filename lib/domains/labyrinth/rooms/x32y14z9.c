inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 32, 14, 9 }));
  set_short( "Passage - x32y14z9" );
set_objects( DIR+"/npc/tawny.c");
 set_exits( ([
  "west" : DIR+"/rooms/x31y14z9.c",
  "east" : DIR+"/rooms/x33y14z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the muck in this area. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
