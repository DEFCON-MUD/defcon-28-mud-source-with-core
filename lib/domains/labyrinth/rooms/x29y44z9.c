inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 44, 9 }));
  set_short( "Corridor - x29y44z9" );
set_objects( DIR+"/npc/snake.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y44z9.c",
  "south" : DIR+"/rooms/x29y43z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the crud in this hellhole. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
