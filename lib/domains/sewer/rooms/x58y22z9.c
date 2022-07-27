inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 22, 9 }));
  set_short( "Hallway - x58y22z9" );
set_objects( DIR+"/monsters/bob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y22z9.c",
  "east" : DIR+"/rooms/x59y22z9.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the crud in this area. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
