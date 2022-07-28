inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 20, 1 }));
  set_short( "Hallway - x45y20z1" );
set_objects( DIR+"/npc/vlarapp.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y20z1.c",
  "east" : DIR+"/rooms/x46y20z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the crud in this dump. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
