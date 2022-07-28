inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 47, 7 }));
  set_short( "Hallway - x53y47z7" );
set_objects( DIR+"/npc/cellguard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y48z7.c",
  "south" : DIR+"/rooms/x53y46z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the crud in this dump. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
