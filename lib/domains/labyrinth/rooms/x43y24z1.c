inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 24, 1 }));
  set_short( "Corridor - x43y24z1" );
set_objects( DIR+"/npc/securityofficer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y24z1.c",
  "north" : DIR+"/rooms/x43y25z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the gunk in this dump. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
