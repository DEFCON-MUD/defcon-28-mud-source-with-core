inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 44, 5 }));
  set_short( "Hallway - x17y44z5" );
set_objects( DIR+"/npc/r1carmella.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y44z5.c",
  "east" : DIR+"/rooms/x18y44z5.c",
  "south" : DIR+"/rooms/x17y43z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the crud in this dump. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, east, and west.%^RESET%^");
}
