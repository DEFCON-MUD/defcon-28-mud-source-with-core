inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 36, 2 }));
  set_short( "Hallway - x43y36z2" );
set_objects( DIR+"/npc/eastformatter.c");
 set_exits( ([
  "east" : DIR+"/rooms/x44y36z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the sludge in this hellhole. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the east.%^RESET%^");
}
