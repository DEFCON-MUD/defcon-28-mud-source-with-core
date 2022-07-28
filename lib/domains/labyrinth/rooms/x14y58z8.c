inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 58, 8 }));
  set_short( "Hallway - x14y58z8" );
set_objects( DIR+"/npc/sandworm.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y58z8.c",
  "east" : DIR+"/rooms/x15y58z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the gunk in this stink-pit. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
