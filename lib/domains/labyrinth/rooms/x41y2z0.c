inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 2, 0 }));
  set_short( "Passage - x41y2z0" );
set_objects( DIR+"/npc/rick.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y2z0.c",
  "east" : DIR+"/rooms/x42y2z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the gunk in this area. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
