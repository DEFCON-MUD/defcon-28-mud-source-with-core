inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 62, 9 }));
  set_short( "Passage - x46y62z9" );
set_objects( DIR+"/monsters/blob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y62z9.c",
  "east" : DIR+"/rooms/x47y62z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the muck in this area. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
