inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 64, 0 }));
  set_short( "Hallway - x15y64z0" );
set_objects( DIR+"/npc/outfitterrobot.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y64z0.c",
  "east" : DIR+"/rooms/x16y64z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the gunk in this hellhole. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
