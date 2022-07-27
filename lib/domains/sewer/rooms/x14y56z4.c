inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 56, 4 }));
  set_short( "Hallway - x14y56z4" );
set_objects( DIR+"/monsters/eastfilinlerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y56z4.c",
  "east" : DIR+"/rooms/x15y56z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the crappy sales material in this dump. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
