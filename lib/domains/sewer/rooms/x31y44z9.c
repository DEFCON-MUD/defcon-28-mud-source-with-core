inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 44, 9 }));
  set_short( "Hallway - x31y44z9" );
set_objects( DIR+"/monsters/brian.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y44z9.c",
  "east" : DIR+"/rooms/x32y44z9.c",
  "south" : DIR+"/rooms/x31y43z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the crud in this area. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, east, and west.%^RESET%^");
}
