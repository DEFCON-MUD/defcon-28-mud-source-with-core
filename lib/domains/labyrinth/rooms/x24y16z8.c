inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 16, 8 }));
  set_short( "Hallway - x24y16z8" );
set_objects( DIR+"/npc/sewerboss.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y16z8.c",
  "east" : DIR+"/rooms/x25y16z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the crud in this joint. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
