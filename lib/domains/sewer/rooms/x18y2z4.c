inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 2, 4 }));
  set_short( "Hallway - x18y2z4" );
set_objects( DIR+"/monsters/carson.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y2z4.c",
  "east" : DIR+"/rooms/x19y2z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the radioactive waste in this stink-pit. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
