inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 58, 6 }));
  set_short( "Hallway - x59y58z6" );
set_objects( DIR+"/npc/carson.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y58z6.c",
  "north" : DIR+"/rooms/x59y59z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the crud in this hellhole. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
