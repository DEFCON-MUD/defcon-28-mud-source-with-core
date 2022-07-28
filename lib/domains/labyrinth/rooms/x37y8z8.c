inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 8, 8 }));
  set_short( "Hallway - x37y8z8" );
set_objects( DIR+"/npc/r1physicist.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y8z8.c",
  "south" : DIR+"/rooms/x37y7z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the gunk in this hellhole. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
