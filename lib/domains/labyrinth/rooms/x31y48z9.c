inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 48, 9 }));
  set_short( "Passage - x31y48z9" );
set_objects( DIR+"/npc/steve.c");
 set_exits( ([
  "east" : DIR+"/rooms/x32y48z9.c",
  "south" : DIR+"/rooms/x31y47z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the crud in this dump. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
