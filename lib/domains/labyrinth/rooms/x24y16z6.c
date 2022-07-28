inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 16, 6 }));
  set_short( "Hallway - x24y16z6" );
set_objects( DIR+"/npc/weevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y16z6.c",
  "east" : DIR+"/rooms/x25y16z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
