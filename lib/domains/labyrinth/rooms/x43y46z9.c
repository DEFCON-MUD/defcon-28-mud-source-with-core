inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 46, 9 }));
  set_short( "Corridor - x43y46z9" );
set_objects( DIR+"/npc/fieldmouse.c");
 set_exits( ([
  "east" : DIR+"/rooms/x44y46z9.c",
  "south" : DIR+"/rooms/x43y45z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the sludge in this area. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
