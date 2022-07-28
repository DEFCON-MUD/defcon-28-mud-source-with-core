inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 56, 5 }));
  set_short( "Corridor - x22y56z5" );
set_objects( DIR+"/npc/sandworm.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y56z5.c",
  "east" : DIR+"/rooms/x23y56z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the gunk in this area. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
