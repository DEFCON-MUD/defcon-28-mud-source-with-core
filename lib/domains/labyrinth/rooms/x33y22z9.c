inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 22, 9 }));
  set_short( "Corridor - x33y22z9" );
set_objects( DIR+"/npc/cyberslime.c");
 set_exits( ([
  "east" : DIR+"/rooms/x34y22z9.c",
  "south" : DIR+"/rooms/x33y21z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the crud in this joint. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
