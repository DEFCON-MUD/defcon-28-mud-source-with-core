inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 58, 1 }));
  set_short( "Hallway - x21y58z1" );
set_objects( DIR+"/npc/clubbouncer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y58z1.c",
  "east" : DIR+"/rooms/x22y58z1.c",
  "north" : DIR+"/rooms/x21y59z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the sludge in this hellhole. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, east, and north.%^RESET%^");
}
