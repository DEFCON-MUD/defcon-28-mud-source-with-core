inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 61, 5 }));
  set_short( "Hallway - x53y61z5" );
set_objects( DIR+"/npc/varysstark.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y62z5.c",
  "south" : DIR+"/rooms/x53y60z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the crud in this hellhole. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
