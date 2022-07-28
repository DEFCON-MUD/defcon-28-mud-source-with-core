inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 8, 9 }));
  set_short( "Corridor - x55y8z9" );
set_objects( DIR+"/npc/bouncer2.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y8z9.c",
  "north" : DIR+"/rooms/x55y9z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the gunk in this area. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
