inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 22, 6 }));
  set_short( "Corridor - x13y22z6" );
set_objects( DIR+"/npc/buddypetersen.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y22z6.c",
  "east" : DIR+"/rooms/x14y22z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the gunk in this area. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
