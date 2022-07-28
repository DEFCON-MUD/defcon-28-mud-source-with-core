inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 36, 9 }));
  set_short( "Hallway - x49y36z9" );
set_objects( DIR+"/npc/jackie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y36z9.c",
  "north" : DIR+"/rooms/x49y37z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the crap in this dump. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
