inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 10, 4 }));
  set_short( "Passage - x7y10z4" );
set_objects( DIR+"/monsters/wasteworm.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y10z4.c",
  "south" : DIR+"/rooms/x7y9z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the crud in this sty. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
