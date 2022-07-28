inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 31, 0 }));
  set_short( "Corridor - x55y31z0" );
set_objects( DIR+"/npc/ursula.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y32z0.c",
  "south" : DIR+"/rooms/x55y30z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the crud in this joint. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
